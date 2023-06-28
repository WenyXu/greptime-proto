// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.2.0
// - protoc             v3.21.6
// source: greptime/v1/meta/ddl.proto

package meta

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.32.0 or later.
const _ = grpc.SupportPackageIsVersion7

// DdlTaskClient is the client API for DdlTask service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type DdlTaskClient interface {
	// Submits a DDL task to meta.
	SubmitDdlTask(ctx context.Context, in *SubmitDdlTaskRequest, opts ...grpc.CallOption) (*SumbitDdlTaskResponse, error)
}

type ddlTaskClient struct {
	cc grpc.ClientConnInterface
}

func NewDdlTaskClient(cc grpc.ClientConnInterface) DdlTaskClient {
	return &ddlTaskClient{cc}
}

func (c *ddlTaskClient) SubmitDdlTask(ctx context.Context, in *SubmitDdlTaskRequest, opts ...grpc.CallOption) (*SumbitDdlTaskResponse, error) {
	out := new(SumbitDdlTaskResponse)
	err := c.cc.Invoke(ctx, "/greptime.v1.meta.DdlTask/SubmitDdlTask", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// DdlTaskServer is the server API for DdlTask service.
// All implementations must embed UnimplementedDdlTaskServer
// for forward compatibility
type DdlTaskServer interface {
	// Submits a DDL task to meta.
	SubmitDdlTask(context.Context, *SubmitDdlTaskRequest) (*SumbitDdlTaskResponse, error)
	mustEmbedUnimplementedDdlTaskServer()
}

// UnimplementedDdlTaskServer must be embedded to have forward compatible implementations.
type UnimplementedDdlTaskServer struct {
}

func (UnimplementedDdlTaskServer) SubmitDdlTask(context.Context, *SubmitDdlTaskRequest) (*SumbitDdlTaskResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SubmitDdlTask not implemented")
}
func (UnimplementedDdlTaskServer) mustEmbedUnimplementedDdlTaskServer() {}

// UnsafeDdlTaskServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to DdlTaskServer will
// result in compilation errors.
type UnsafeDdlTaskServer interface {
	mustEmbedUnimplementedDdlTaskServer()
}

func RegisterDdlTaskServer(s grpc.ServiceRegistrar, srv DdlTaskServer) {
	s.RegisterService(&DdlTask_ServiceDesc, srv)
}

func _DdlTask_SubmitDdlTask_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SubmitDdlTaskRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(DdlTaskServer).SubmitDdlTask(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/greptime.v1.meta.DdlTask/SubmitDdlTask",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(DdlTaskServer).SubmitDdlTask(ctx, req.(*SubmitDdlTaskRequest))
	}
	return interceptor(ctx, in, info, handler)
}

// DdlTask_ServiceDesc is the grpc.ServiceDesc for DdlTask service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var DdlTask_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "greptime.v1.meta.DdlTask",
	HandlerType: (*DdlTaskServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "SubmitDdlTask",
			Handler:    _DdlTask_SubmitDdlTask_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "greptime/v1/meta/ddl.proto",
}
