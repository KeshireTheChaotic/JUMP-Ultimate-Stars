
/* JUS-CLASS ALFont_021d4974::ALFont_021d4974 [class-source-file] stores vtable 021d4974 into *this
   (constructor) */

int * ALFont_021d4974::ALFont_021d4974
                (int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  ALFont_021d4f60::ALFont_021d4f60(param_1,param_2,0x80,param_4,param_4);
  *param_1 = (int)&vftable;
  param_1[0x1c] = param_3;
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  *(bool *)(param_1 + 0x1e) = 8 < uVar1;
  if (8 < uVar1) {
    iVar2 = jus_AllocDebug(0x4000,s_ALTextDS_cpp_021d4e30,&DAT_021d48dc,0x567);
    param_1[0x1d] = iVar2;
    MIi_CpuClear32(0,iVar2,0x4000);
  }
  else {
    iVar2 = jus_AllocDebug(0x2000,s_ALTextDS_cpp_021d4e30,&DAT_021d48dc,0x56a);
    param_1[0x1d] = iVar2;
    MIi_CpuClear32(0,iVar2,0x2000);
  }
  return param_1;
}

