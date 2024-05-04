@echo off

set project=Movies.Core.Infrastructure.csproj
set startupProject=Movies.Core.Infrastructure.csproj
set connection=Server=localhost;Database=MovieCatalogue;Integrated Security=true;
set provider=Microsoft.EntityFrameworkCore.SqlServer
set outputDir=../Movies.Core.Infrastructure/Database/MovieCatalogue/Models
set contextDir=../Movies.Core.Infrastructure/Database/MovieCatalogue/Contexts
set context=MoviesCatalogueDbContext
set schema=
set tables=
set dataAnnotations=
set useDatabaseNames=
set force=--force

@echo on

dotnet ef dbcontext scaffold ^
 "%connection%" %provider% ^
--project "%project%" ^
--startup-project "%startupProject%" ^
--context-dir "%contextDir%" ^
--output-dir "%outputDir%" ^
--context "%context%" ^
--use-database-names ^
%tables% ^
%force%

@echo off
