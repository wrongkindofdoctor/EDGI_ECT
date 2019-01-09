// This is the main program launched by the run script.
/* It reads data from a list of user-specified netCDF files, runs QC and dimension re-ordering procedures on the data, and applies data reduction functions from the EDGI library to the data. Te user specifies whether the results are written to a summary file, or are compared to the statistics in a pre-existing summary file
 */
int main ()
{
	// 1. Read in data from netCDF files(s)

	// 2. Check for missing data (NaNs or all 0's)

	// 3. Reorder dimensions to time x lev x lat x lon if needed

	// 4. Compute area/pressure-weighted averages over space x time dimensions

	// 5. Compute standard deviations over space and time dimensions

	// 6a. Compute ensemble member x global mean variable correlation matrix

	// If the user passes the flag to generate a summary file:
	// 7a. Compute EOFs and PC scores (scores are linear combinations of variables for each ensemble member)

	// 8a. Determine the cutoff N for EOF separation and retain the first N EOFs for analysis

	// 9a. Write results to summary file

	// Else if the user passes the flag to run ECT on new ensemble

	// Do steps 1--5 for randomly-selected subset of new ensemble

	// 6b. Read in data from summary file

	// Project the new correlation matrix onto the reference EOFs to generate PC scores

	// Compare first N scores across ensemble members. The metric is the ensemble standard deviation for each 1-N PCs of the base ensemble. A PC (e.g., PC1) from the new ensemble fails the consistency test if the value is larger than 2xbase ensemble standard deviation for that PC (PC1). The new ensemble completely fails the consistency test 3 or more of the first N PCs have values larger than the same PCs in the base ensemble.





}
