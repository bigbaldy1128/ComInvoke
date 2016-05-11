using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ComSharp
{
    [Guid("295B0964-4F98-404C-83E2-0DC8E17BC8AF")]
    public interface IMyInterface
    {
        void Write(string str);
    }
    [Guid("5C33043C-2FA3-4A45-B40A-BE7B51CBDD91")]
    public class MyClass : IMyInterface
    {
        public void Write(string str)
        {
            File.WriteAllText("C:\\comsharp.log", str);
        }
    }
}
