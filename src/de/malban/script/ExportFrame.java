/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package de.malban.script;

import de.malban.graphics.ImageSourceEdit;
import java.util.Collection;

/**
 *
 * @author salchr
 */
public class ExportFrame extends javax.swing.JFrame {

    /**
     * Creates new form ExportFrame
     */
    public ExportFrame() {
        initComponents();
    }

    public ExportFrame(Collection collectionName) {
    initComponents();
    exportDataPanel1.setData(collectionName);        
}    

    public ExportFrame(ImageSourceEdit sourceEdit) {
        initComponents();
        exportDataPanel1.setData(sourceEdit);        
    }    
       
    

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        exportDataPanel1 = new de.malban.script.ExportDataPanel();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(exportDataPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(exportDataPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 446, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private de.malban.script.ExportDataPanel exportDataPanel1;
    // End of variables declaration//GEN-END:variables
}
