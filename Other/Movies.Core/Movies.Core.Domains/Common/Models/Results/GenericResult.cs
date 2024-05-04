using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Movies.Core.Domains.Common.Models.Results
{
    public class GenericResult<TContent> : GenericResult
    {
        public TContent Content { get; set; }

        private GenericResult(GenericResultStatus status, TContent content) : base(status)
        {
            Content = content;
        }

        public static implicit operator GenericResult<TContent>(TContent content) => new(GenericResultStatus.Success, content);

        public static implicit operator GenericResult<TContent>(GenericResultStatus status) => new(status, default);
    }

    public class GenericResult
    {
        public GenericResultStatus Status { get; set; }

        protected GenericResult(GenericResultStatus status)
        {
            Status = status;
        }

        public static implicit operator GenericResult(GenericResultStatus status)
        {
            return new GenericResult(status);
        }
    }
}
