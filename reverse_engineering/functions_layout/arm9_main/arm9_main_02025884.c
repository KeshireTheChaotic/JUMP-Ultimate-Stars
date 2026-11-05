
/* JUS-CLASS jus_Class_020945fc::vfunc_04 [class-virtual] slot 4 of vtable 020945fc (own slot, not
   inherited) */

int jus_Class_020945fc::vfunc_04(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  puVar1 = puVar3;
  if (*(uint *)(param_1 + 0x14) <= (uint)puVar3[2]) {
    puVar1 = (undefined4 *)jus_AllocDebug((*(uint *)(param_1 + 0x14) - 1) * 4 + 0x10);
    *puVar3 = puVar1;
    puVar1[1] = puVar3;
    *puVar1 = 0;
    puVar1[2] = 0;
    *(undefined4 **)(param_1 + 0xc) = puVar1;
  }
  iVar2 = puVar1[2];
  puVar1[2] = iVar2 + 1;
  puVar1[iVar2 + 3] = param_2;
  (**(code **)(*param_2 + 8))();
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  return iVar2;
}

