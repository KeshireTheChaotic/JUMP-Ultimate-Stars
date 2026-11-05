
/* JUS-GAME ALWidgetBase::CreateIntf [source-string] __FILE__="ALWidgetBase.cpp"
   __FUNCTION__="CreateIntf" lines=[1190] passed to 1 source-location call(s) */

void ALWidgetBase::CreateIntf(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(8,s_ALWidgetBase_cpp_021d3de8,s_CreateIntf_021d3bb4,0x4a6);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALWidgetBase_021d29c4::ALWidgetBase_021d29c4(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

