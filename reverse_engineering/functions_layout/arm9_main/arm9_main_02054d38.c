
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02054d38(void)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  
                    /* JUS-TAG hw={"TIMER":1} io=["04000106"] */
  _DAT_04000106 = 0;
  FUN_02051d14(0x10);
  _DAT_027c3ff8 = _DAT_027c3ff8 | 0x10;
  uVar5 = FUN_02054b44();
  puVar1 = DAT_020aae9c;
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  if (DAT_020aae9c == (undefined4 *)0x0) {
    return;
  }
  bVar4 = (uint)DAT_020aae9c[4] <= uVar2;
  if (uVar2 == DAT_020aae9c[4]) {
    bVar4 = (uint)DAT_020aae9c[3] <= (uint)uVar5;
  }
  if (!bVar4) {
    FUN_02055118(DAT_020aae9c);
    return;
  }
  DAT_020aae9c = (undefined4 *)DAT_020aae9c[6];
  if (DAT_020aae9c == (undefined4 *)0x0) {
    DAT_020aaea0 = 0;
  }
  else {
    *(undefined4 *)((int)DAT_020aae9c + 0x14) = 0;
  }
  pcVar3 = (code *)*puVar1;
  if (puVar1[8] == 0 && puVar1[7] == 0) {
    *puVar1 = 0;
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(puVar1[1]);
  }
  if (puVar1[8] != 0 || puVar1[7] != 0) {
    *puVar1 = pcVar3;
    FUN_02054f60(puVar1,0,0);
  }
  if (DAT_020aae9c == (undefined4 *)0x0) {
    return;
  }
  FUN_02055118();
  return;
}

