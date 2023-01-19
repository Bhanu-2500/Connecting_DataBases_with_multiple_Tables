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
       

        private readonly string _path = @"C:\Users\bhanu\Desktop\Lecture_11\UniversityInfo.db";
        protected override void OnConfiguring(DbContextOptionsBuilder 
            optionsBuilder) => optionsBuilder
                                .UseSqlite($"Data Source = {_path}");
        public DbSet<Student> Students { get; set; }
        public DbSet<Module> Modules { get; set; }
        public DbSet<Teacher> Teachers { get; set; }

    }
}
