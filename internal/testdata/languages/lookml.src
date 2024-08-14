## STRUCTURAL PARAMETERS
project_name: "Current Project Name"
new_lookml_runtime: yes 
local_dependency: {
  project: "project_name"
  override_constant: constant_name {
    value: "string value" 
  }
}
## Possibly more local_dependency statements

remote_dependency: remote_project_name {
  url: "remote_project_url"
  ref: "remote_project_ref"
  override_constant: constant_name {
    value: "string value" 
  }
}
# Possibly more remote_dependency statements

constant: constant_name {
  value: "string value"
  export: none | override_optional | override_required
}
# Possibly more constant statements

## LOCALIZATION PARAMETERS
localization_settings: {
  localization_level: strict | permissive
  default_locale: locale_name
}

## EXTENSION FRAMEWORK PARAMETERS
application: application_name {
  label: "Application Label" 
  url: "application_url" 
  file: "application_file_path" 
  mount_points: {
    # Desired mount points (described on application page)
  }
  entitlements: {
    # Desired entitlements (described on application page)
  }
}
## Possibly more application statements

## CUSTOM VISUALIZATION PARAMETERS
visualization:{
  id: "unique-id" 
  label: "Visualization Label" 
  url: "visualization_url" 
  sri_hash: "SRI hash" 
  dependencies: ["dependency_url_1","dependency_url_2"]
  file: "visualization_file_path" 
}
## Possibly more visualization statements
