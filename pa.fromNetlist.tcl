
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name lab3 -dir "D:/lab3_tinh/lab3_tinh/planAhead_run_1" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/lab3_tinh/lab3_tinh/main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/lab3_tinh/lab3_tinh} }
set_property target_constrs_file "D:/lab3_tinh/nexys3.ucf" [current_fileset -constrset]
add_files [list {D:/lab3_tinh/nexys3.ucf}] -fileset [get_property constrset [current_run]]
link_design
