
/* JUS-CLASS jus_Class_020966d0::vfunc_20 [class-virtual] slot 20 of vtable 020966d0 (own slot, not
   inherited) */

int jus_Class_020966d0::vfunc_20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x24) & 0x7f) >> 6 != 0) {
    return param_1 + 0x54;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if ((*(byte *)(param_1 + 0x24) & 0x1f) >> 4 != 0) {
      (**(code **)(param_1 + 0x2c))(param_1);
      FUN_0201a12c(param_1 + 0x54,param_1 + 0x3c);
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xef;
    }
  }
  else {
    iVar2 = 0;
    for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      (&DAT_020a2520)[iVar2] = iVar1;
      iVar2 = iVar2 + 1;
      if ((*(byte *)(iVar1 + 0x24) & 0x7f) >> 6 != 0) break;
    }
    *(byte *)((&DAT_020a2520)[iVar2 + -1] + 0x25) =
         *(byte *)((&DAT_020a2520)[iVar2 + -1] + 0x25) | 8;
    for (iVar2 = iVar2 + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
      *(byte *)((&DAT_020a2520)[iVar2] + 0x24) = *(byte *)((&DAT_020a2520)[iVar2] + 0x24) | 0x10;
      FUN_0202a34c((&DAT_020a2520)[iVar2],*(undefined4 *)(iVar2 * 4 + 0x20a2524));
    }
  }
  return param_1 + 0x54;
}

