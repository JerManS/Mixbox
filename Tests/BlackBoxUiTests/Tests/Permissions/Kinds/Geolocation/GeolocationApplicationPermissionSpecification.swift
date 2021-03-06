import MixboxTestsFoundation

final class GeolocationApplicationPermissionSpecification: ApplicationPermissionSpecification {
    var identifier: String {
        return "geolocation"
    }
    
    func setter(permissions: ApplicationPermissionsSetter) -> ApplicationPermissionSetter {
        return permissions.geolocation
    }
    
    func authorizationStatusString(state: AllowedDeniedNotDeterminedState) -> String {
        switch state {
        case .allowed:
            return "authorizedAlways"
        case .denied:
            return "denied"
        case .notDetermined:
            return "notDetermined"
        }
    }
}
