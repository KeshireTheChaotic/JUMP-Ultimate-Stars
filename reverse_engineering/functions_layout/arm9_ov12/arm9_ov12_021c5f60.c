
/* JUS-GAME ALText::CreateIntf [source-string] __FILE__="ALText.cpp" __FUNCTION__="CreateIntf"
   lines=[114] passed to 1 source-location call(s) */

void ALText::CreateIntf(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(8,s_ALText_cpp_021d48ac,s_CreateIntf_021d4628,0x72);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALText(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

