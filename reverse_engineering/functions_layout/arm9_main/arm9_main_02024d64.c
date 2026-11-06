
/* JUS-CLASS jus_Class_02098c48::vfunc_09 [class-virtual] slot 9 of vtable 02098c48 (own slot, not
   inherited) */

void jus_Class_02098c48::vfunc_09(undefined4 param_1,int param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = param_3[1];
  iVar2 = *(int *)(param_2 + 0x50);
  *(int *)(iVar2 + 0xc) = (int)*param_3 << 0xc;
  *(int *)(iVar2 + 0x10) = (int)sVar1 << 0xc;
  FUN_02024c3c(iVar2,1);
  return;
}

