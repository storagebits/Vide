------------------------------------------------------------------------------
--                                                                          --
--                         GNAT COMPILER COMPONENTS                         --
--                                                                          --
--                S Y S T E M . F I N A L I Z A T I O N _ R O O T           --
--                                                                          --
--                                 S p e c                                  --
--                                                                          --
--          Copyright (C) 1992-2007, Free Software Foundation, Inc.         --
--                                                                          --
-- GNAT is free software;  you can  redistribute it  and/or modify it under --
-- terms of the  GNU General Public License as published  by the Free Soft- --
-- ware  Foundation;  either version 2,  or (at your option) any later ver- --
-- sion.  GNAT is distributed in the hope that it will be useful, but WITH- --
-- OUT ANY WARRANTY;  without even the  implied warranty of MERCHANTABILITY --
-- or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License --
-- for  more details.  You should have  received  a copy of the GNU General --
-- Public License  distributed with GNAT;  see file COPYING.  If not, write --
-- to  the  Free Software Foundation,  51  Franklin  Street,  Fifth  Floor, --
-- Boston, MA 02110-1301, USA.                                              --
--                                                                          --
-- As a special exception,  if other files  instantiate  generics from this --
-- unit, or you link  this unit with other files  to produce an executable, --
-- this  unit  does not  by itself cause  the resulting  executable  to  be --
-- covered  by the  GNU  General  Public  License.  This exception does not --
-- however invalidate  any other reasons why  the executable file  might be --
-- covered by the  GNU Public License.                                      --
--                                                                          --
-- GNAT was originally developed  by the GNAT team at  New York University. --
-- Extensive contributions were provided by Ada Core Technologies Inc.      --
--                                                                          --
------------------------------------------------------------------------------

--  This unit provides the basic support for controlled (finalizable) types

with Ada.Streams;
with Ada.Unchecked_Conversion;

package System.Finalization_Root is
   pragma Preelaborate;

   type Root_Controlled is tagged;

   type Finalizable_Ptr is access all Root_Controlled'Class;

   function To_Finalizable_Ptr is
     new Ada.Unchecked_Conversion (Address, Finalizable_Ptr);

   function To_Addr is
     new Ada.Unchecked_Conversion (Finalizable_Ptr, Address);

   type Empty_Root_Controlled is abstract tagged null record;
   --  Just for the sake of Controlled equality (see Ada.Finalization)

   type Root_Controlled is new Empty_Root_Controlled with record
      Prev, Next : Finalizable_Ptr;
   end record;
   subtype Finalizable is Root_Controlled'Class;

   procedure Initialize (Object : in out Root_Controlled);
   procedure Finalize   (Object : in out Root_Controlled);
   procedure Adjust     (Object : in out Root_Controlled);

   --  Stream-oriented attibutes for Root_Controlled. These must be empty so
   --  as to not copy the finalization chain pointers. They are declared in
   --  a nested package so that they do not create primitive operations of
   --  Root_Controlled. Otherwise this would add unwanted primitives to (the
   --  full view of) Ada.Finalization.Limited_Controlled, which would cause
   --  trouble in cases where a limited controlled type is used as the
   --  designated type of a remote access-to-classwide type.

   package Stream_Attributes is

      procedure Write
        (Stream : not null access Ada.Streams.Root_Stream_Type'Class;
         Item   : Root_Controlled) is null;

      procedure Read
        (Stream : not null access Ada.Streams.Root_Stream_Type'Class;
         Item   : out Root_Controlled) is null;

   end Stream_Attributes;

   for Root_Controlled'Read use Stream_Attributes.Read;
   for Root_Controlled'Write use Stream_Attributes.Write;

end System.Finalization_Root;
