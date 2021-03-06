#if DEBUG

import MixboxInAppServices
import MixboxIpc

final class CustomIpcMethods {
    static func registerIn(_ mixboxInAppServices: MixboxInAppServices) {
        // For Echo tests
        mixboxInAppServices.register(methodHandler: EchoIpcMethodHandler<String>())
        mixboxInAppServices.register(methodHandler: EchoIpcMethodHandler<Int>())
        mixboxInAppServices.register(methodHandler: EchoIpcMethodHandler<IpcVoid>())
        mixboxInAppServices.register(methodHandler: EchoIpcMethodHandler<Bool>())
        mixboxInAppServices.register(methodHandler: EchoIpcMethodHandler<[String]>())
        mixboxInAppServices.register(methodHandler: EchoIpcMethodHandler<[String: String]>())
        
        // For Callback tests
        mixboxInAppServices.register(methodHandler: CallbackFromAppIpcMethodHandler<Int>())
        mixboxInAppServices.register(methodHandler: CallbackToAppIpcMethodHandler<Int, String>())
        mixboxInAppServices.register(methodHandler: NestedCallbacksToAppIpcMethodHandler())
        
        // For Launching tests
        mixboxInAppServices.register(methodHandler: ProcessInfoIpcMethodHandler())
    }
}

#endif
