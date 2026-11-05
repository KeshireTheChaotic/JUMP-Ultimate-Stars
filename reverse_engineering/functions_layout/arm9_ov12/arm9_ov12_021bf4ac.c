
uint FUN_021bf4ac(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_78 [100];
  
  uVar5 = 0;
  if (param_1 == 0) {
    puVar4 = (undefined1 *)0x27ffe00;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x24);
    uVar1 = FUN_02064430(param_1,auStack_78,0x60);
    puVar4 = (undefined1 *)0x0;
    if (0x5f < uVar1) {
      puVar4 = auStack_78;
    }
    FUN_020643f4(param_1,iVar3 - iVar2,0);
  }
  if ((puVar4 != (undefined1 *)0x0) &&
     (uVar5 = *(int *)(puVar4 + 0x2c) + 0x268 + *(int *)(puVar4 + 0x3c), uVar5 < 0x10000)) {
    uVar5 = 0x10000;
  }
  return uVar5;
}

