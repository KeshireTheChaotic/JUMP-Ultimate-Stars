
/* JUS-CLASS jus_Class_02095ea0::vfunc_19 [class-virtual] slot 19 of vtable 02095ea0 (own slot, not
   inherited) */

undefined4
jus_Class_02095ea0::vfunc_19(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  pcVar3 = *(code **)(**(int **)(param_1 + 0x1c) + 0x2c);
  iVar1 = (*pcVar3)(*(int **)(param_1 + 0x1c),0,pcVar3,param_4,param_4);
  iVar4 = 0;
  while( true ) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
    if ((int)(uint)*(ushort *)(iVar2 + 6) <= iVar4) {
      return 0;
    }
    if (((*(uint *)(iVar1 + (iVar4 * 4 + 3) * 4 + 0x10) & 0x80000000) != 0) &&
       (iVar2 = FUN_02004c2c(iVar1 + *(int *)(iVar1 + iVar4 * 0x10 + 0x14) + -0x22,param_2),
       iVar2 == 0)) break;
    iVar4 = iVar4 + 1;
  }
  return 1;
}

