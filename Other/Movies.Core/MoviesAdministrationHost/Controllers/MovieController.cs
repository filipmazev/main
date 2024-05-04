using Microsoft.AspNetCore.Mvc;
using Movies.Core.Domains.Common.Models.Data;
using Movies.Core.Domains.Common.Models.Results;

namespace MoviesAdministrationHost.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class MovieController : ControllerBase
    {
        [HttpGet("RetrieveAllMovies", Name = "RetrieveAllMovies")]
        [ProducesResponseType(typeof(GenericResult<List<MovieResult>>), 200)]
        public async Task<GenericResult<List<MovieResult>>> RetrieveAllMovies()
        {
            try
            {
                return await Task.FromResult(
                    new List<MovieResult> { new () 
                    {  
                        Title = "The Shawshank Redemption",
                        Description = "Two imprisoned",
                        Genre = "Drama",
                        Director = "Frank Darabont",
                        Producer = "Niki Marvin",
                        ReleaseDate = new DateTime(1994, 10, 14),
                        Rating = 9.3f
                    } 
                });
            }
            catch 
            {
                return GenericResultStatus.ServerError;
            }
        }
    }
}
