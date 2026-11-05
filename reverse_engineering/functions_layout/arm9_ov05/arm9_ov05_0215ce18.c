
void FUN_0215ce18(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  
  *(undefined1 *)(param_1 + 0x135) = 0;
  puVar4 = *(undefined4 **)(*param_1 + 0x558);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  piVar3 = param_1 + 0x8d;
  uStack_20 = param_4;
  for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
    iVar1 = FUN_0214d560(param_1[1],
                         (*(byte *)((int)puVar4 + 0xe) & 0xf) + (uint)*(byte *)((int)puVar4 + 0x43),
                         ((int)(*(byte *)((int)puVar4 + 0xe) & 0xf0) >> 4) +
                         (uint)*(byte *)(puVar4 + 0x11));
    piVar3[1] = iVar1;
    piVar2 = piVar3;
    if (iVar1 != 0) {
      FUN_0215ced4(&uStack_20);
      FUN_0215b71c(uStack_20);
      iVar1 = FUN_0215b6f4();
      FUN_02051890(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 2,piVar3 + 2,0x1e);
      piVar2 = piVar3 + 10;
      *piVar3 = (int)puVar4;
      *(char *)(param_1 + 0x135) = (char)param_1[0x135] + '\x01';
    }
    piVar3 = piVar2;
  }
  return;
}

