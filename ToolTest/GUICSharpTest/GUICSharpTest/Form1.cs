using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace GUICSharpTest
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            StreamWriter sw = new StreamWriter("D:\\Test1.txt");
            //Write a line of text
            sw.WriteLine("Hello World!!");
            //Write a second line of text
            sw.WriteLine("From the StreamWriter class");
            //Close the file
            sw.Close();
        }

        private JObject CreateTempJsonObject()
        {
            JObject obj = new JObject(
                new JProperty("Version", "10.20.30.0"),
                new JProperty("Country", "kr")
                );
            return obj;
        }
        private void SaveButton_Click(object sender, EventArgs e)
        {
            SaveFileDialog dialog = new SaveFileDialog();

            if(DialogResult.OK == dialog.ShowDialog())
            {
                using(StreamWriter writter = new StreamWriter(dialog.FileName,true, Encoding.UTF8))
                {
                    //JObject jsonObject = JObject.Parse(writter.ToString());
                    JObject jsonObject = CreateTempJsonObject();

                    string json = JsonConvert.SerializeObject(jsonObject, Formatting.Indented);
                    writter.Write(json);
                }
            }
        }

        private void LoadButton_Click(object sender, EventArgs e)
        {
            OpenFileDialog dialog = new OpenFileDialog(); 
            if(DialogResult.OK == dialog.ShowDialog())
            {
                using(StreamReader fileReader = new StreamReader(dialog.FileName, Encoding.UTF8))
                {
                    using (JsonTextReader jsonReader = new JsonTextReader(fileReader))
                    {
                        JObject json = (JObject)JToken.ReadFrom(jsonReader);

                        Int32 breakPos = 3;
                    }
                }
            }
        }
    }
}
