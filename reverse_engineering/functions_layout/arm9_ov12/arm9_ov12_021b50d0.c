
/* JUS-GAME ALWidgetBase::CreatePointingDeviceNode [source-string] __FILE__="ALWidgetBase.cpp"
   __FUNCTION__="CreatePointingDeviceNode" lines=[100, 798] passed to 2 source-location call(s);
   header inlines: ALNodeImp.h:Create */

void ALWidgetBase::CreatePointingDeviceNode(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  FUN_021b1590(*(undefined4 *)(DAT_020a0e80 + 600),0x80000000,0x40000000);
  iVar1 = jus_AllocDebug(0x6c,s_ALNodeImp_h_021d16fc,s_Create_021d3b40,100);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(iVar1,FUN_02021ff4,0);
  }
  DAT_021d5148 = piVar2;
  FUN_02028428(piVar2,&LAB_021b535c_1);
  iVar1 = FUN_021acab4(DAT_021d5148);
  FUN_02027834(*(undefined4 *)(iVar1 + 4),10,0x21b67f1);
  FUN_02028384(DAT_021d5148,&LAB_021b5368_1);
  local_10 = 0x2000;
  (**(code **)(*DAT_021d5148 + 0xa0))(DAT_021d5148,&local_10);
  iVar1 = jus_AllocDebug(0x68,s_ALWidgetBase_cpp_021d3de8,s_CreatePointingDeviceNode_021d3d2c,0x31e)
  ;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = ALWidgetBase_021d1b78::ALWidgetBase_021d1b78(iVar1,0x80000000,&DAT_02093c8c);
  }
  FUN_021b0ba0(uVar3,0);
  FUN_021b0bd0(uVar3,0);
  (**(code **)(*DAT_021d5148 + 0xf0))(DAT_021d5148,uVar3);
  return;
}

