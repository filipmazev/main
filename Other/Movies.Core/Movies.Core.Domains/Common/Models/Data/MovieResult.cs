using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Movies.Core.Domains.Common.Models.Data
{
    public class MovieResult
    {
        public required string Title { get; set; }
        public required string Description { get; set; }
        public required string Genre { get; set; }
        public required string Director { get; set; }
        public required string Producer { get; set; }
        public DateTime ReleaseDate { get; set; }
        public required float Rating { get; set; }
    }
}
