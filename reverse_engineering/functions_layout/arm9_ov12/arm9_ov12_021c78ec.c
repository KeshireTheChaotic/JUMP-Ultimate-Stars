
/* JUS-GAME ALTextDS::CreateDrawFunc [source-string] __FILE__="ALTextDS.cpp"
   __FUNCTION__="CreateDrawFunc" lines=[48, 51, 53] passed to 3 source-location call(s) */

void ALTextDS::CreateDrawFunc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_020a0dd0;
  iVar2 = (**(code **)(*DAT_020a0dd0 + 0x74))();
  if (iVar2 != 0) {
    iVar2 = jus_AllocDebug(0x178,s_ALTextDS_cpp_021d4e30,s_CreateDrawFunc_021d4924,0x30,param_4);
    if (iVar2 == 0) {
      return;
    }
    ALTextImp_021d4c54::ALTextImp_021d4c54(iVar2,param_1);
    return;
  }
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  if (iVar2 == 0) {
    iVar2 = jus_AllocDebug(0x178,s_ALTextDS_cpp_021d4e30,s_CreateDrawFunc_021d4924,0x35,param_4);
    if (iVar2 == 0) {
      return;
    }
    jus_Class_021d4b9c::jus_Class_021d4b9c(iVar2,param_1);
    return;
  }
  iVar2 = jus_AllocDebug(0x1b8,s_ALTextDS_cpp_021d4e30,s_CreateDrawFunc_021d4924,0x33,param_4);
  if (iVar2 == 0) {
    return;
  }
  ALTextDS_021d4a2c::ALTextDS_021d4a2c(iVar2,param_1);
  return;
}

