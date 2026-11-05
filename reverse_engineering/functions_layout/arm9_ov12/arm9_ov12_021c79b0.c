
/* JUS-GAME ALTextDS::CreateIntf [source-string] __FILE__="ALTextDS.cpp" __FUNCTION__="CreateIntf"
   lines=[59] passed to 1 source-location call(s) */

void ALTextDS::CreateIntf(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_0201a228(8,s_ALTextDS_cpp_021d4e30,s_CreateIntf_021d4908,0x3b);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALTextDS_021d49cc::ALTextDS_021d49cc(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

