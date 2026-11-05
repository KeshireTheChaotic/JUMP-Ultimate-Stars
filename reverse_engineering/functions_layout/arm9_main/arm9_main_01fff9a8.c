
void FUN_01fff9a8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined2 *puVar4;
  int *unaff_r4;
  int iVar5;
  uint in_lr;
  undefined1 uVar6;
  
  uVar6 = *(ushort *)*param_1 >> 9 == 0x7f;
  if ((bool)uVar6) {
    FUN_01fffa9c((ushort *)*param_1 + 1);
    param_1 = extraout_r1;
  }
  if (!(bool)uVar6) {
    FUN_01fffadc();
    param_1 = extraout_r1_00;
  }
  param_1[0x1b] = param_1[0x1b] ^ 1;
  iVar2 = iRam01fffb38;
  iVar1 = iRam01fffb34;
  iVar3 = 0x80;
  puVar4 = (undefined2 *)param_1[1];
  do {
    iVar5 = *unaff_r4;
    if (iVar1 < *unaff_r4) {
      iVar5 = iVar1;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    *puVar4 = (short)iVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 1;
    unaff_r4 = unaff_r4 + 1;
  } while (iVar3 != 0);
                    /* WARNING: Could not recover jumptable at 0x01fffa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr & 0xfffffffc))(*(undefined1 *)(*(byte *)((int)param_1 + 0x73) + 0x1fffa1e));
  return;
}

