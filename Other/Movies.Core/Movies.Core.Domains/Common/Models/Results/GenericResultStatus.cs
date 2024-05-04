using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Movies.Core.Domains.Common.Models.Results
{
    public enum GenericResultStatus
    {
        #region Basic
        Success,
        ServerError,
        #endregion

        #region Generic
        NotFound,
        #endregion
    }
}
