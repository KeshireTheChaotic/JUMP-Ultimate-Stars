
void FUN_021b5950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_0201a228(8,s_ALWidgetBase_cpp_021d3de8,s_CreateIntf_021d3bb4,0x4a6);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_021d29c4::jus_Class_021d29c4(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

