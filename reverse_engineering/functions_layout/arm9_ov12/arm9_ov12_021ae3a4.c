
int * FUN_021ae3a4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  int *local_14;
  
  iVar1 = jus_AllocDebug(0x6c,s_ALNodeImp_h_021d16fc,s_Create_021d16b0,100);
  local_14 = (int *)0x0;
  if (iVar1 != 0) {
    local_14 = (int *)ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(iVar1,FUN_02021ff4,0);
  }
  iVar3 = param_1[0x5b];
  iVar1 = jus_AllocDebug(0x14c,s_ALWidgetBaseImp_h_021d177c,s_Create_021d16a8,0x2a6);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)ALNodeImp::Create(iVar1,param_1,iVar3,ALWidgetBaseImp::CreateDrawFunc);
  }
  piVar2[0x52] = (int)&LAB_021af08c_1;
  (**(code **)(*local_14 + 0xd4))(local_14,param_1);
  (**(code **)(*piVar2 + 0xd4))(piVar2,local_14);
  FUN_021ae4c0(param_1 + 0x58,&local_14);
  FUN_021b5900(piVar2,param_1[0x5c],param_1[0x5d]);
  local_18 = 0;
  FUN_021b5930(piVar2,&local_18);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  (**(code **)(*param_1 + 0x178))();
  return piVar2;
}

