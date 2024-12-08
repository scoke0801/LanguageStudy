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
    public partial class AccountForm : Form
    {
        public AccountForm()
        {
            InitializeComponent();
        }

        private void AccountForm_Load(object sender, EventArgs e)
        {
            IdTextBox.Text = SharedData.UserSvnID;
            passwordTextBox.Text = SharedData.UserSvnPassword;
        }

        private void saveButton_Click(object sender, EventArgs e)
        {
            SharedData.SaveUserInfo(IdTextBox.Text, passwordTextBox.Text);
        }
    }
}
