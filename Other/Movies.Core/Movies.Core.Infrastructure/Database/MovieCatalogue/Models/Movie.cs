using System;
using System.Collections.Generic;

#nullable disable

namespace Movies.Core.Infrastructure.Database.MovieCatalogue.Models
{
    public partial class Movie
    {
        public int Id { get; set; }
        public string Title { get; set; }
        public string Description { get; set; }
        public string Genre { get; set; }
        public string Director { get; set; }
        public string Producer { get; set; }
        public DateTime? Release_Date { get; set; }
        public double? Rating { get; set; }
    }
}
