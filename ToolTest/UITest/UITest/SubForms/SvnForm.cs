using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace UITest.SubForms
{
    public partial class SvnForm : Form
    {
        public SvnForm()
        {
            InitializeComponent();
        }

        private void commitButton_Click(object sender, EventArgs e)
        {

        }

        private void fileSelectButton_Click(object sender, EventArgs e)
        {
            OpenFileDialog dialog = new OpenFileDialog();

            if (DialogResult.OK == dialog.ShowDialog())
            {
                selectedFile.Text = dialog.FileName;
            }
        }
    }
}
