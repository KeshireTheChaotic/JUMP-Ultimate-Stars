
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02055118(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
                    /* JUS-TAG hw={"TIMER":2} io=["04000104","04000106"] */
  uVar3 = FUN_02054b44();
  _DAT_04000106 = 0;
  uVar2 = *(uint *)(param_1 + 0xc) - (uint)uVar3;
  iVar1 = *(int *)(param_1 + 0x10) -
          ((int)((ulonglong)uVar3 >> 0x20) + (uint)(*(uint *)(param_1 + 0xc) < (uint)uVar3));
  FUN_02051dc8(1,&LAB_02054d28);
  _DAT_04000104 = 0;
  if (iVar1 < 0) {
    _DAT_04000104 = 0xfffe;
  }
  else if (iVar1 < (int)(uint)(uVar2 < 0x10000)) {
    _DAT_04000104 = ~(ushort)uVar2;
  }
  _DAT_04000106 = 0xc1;
  FUN_02051d5c(0x10);
  return;
}

