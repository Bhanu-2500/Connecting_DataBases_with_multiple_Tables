using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WpfApp1
{
    public class DataBadeContext : DbContext
    {
        private readonly string path = @"C:\Users\bhanu\Desktop\Lecture_11";
        protected override void OnConfiguring(DbContextOptionsBuilder 
            optionsBuilder) => optionsBuilder
                                .UseSqlite($"Data Source = {path}");

        public DbSet<Student> students { get; set; }
        public DbSet<Module> modules { get; set; }
    }
}
