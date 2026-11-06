
void FUN_02179ca8(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool local_18;
  undefined1 local_17;
  undefined1 local_16;
  
  if (param_2 == 2) {
    iVar2 = FUN_02178448();
    iVar1 = FUN_02178448();
    local_18 = param_1 == *(byte *)(iVar2 + (uint)*(byte *)(iVar1 + 0xd) + 0x2c8);
    uVar3 = 1;
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0xd) != '\0') {
      do {
        iVar2 = FUN_02178448();
        if (param_1 == *(byte *)(iVar2 + uVar3 + 0x2c8)) {
          local_17 = (undefined1)uVar3;
          local_16 = (undefined1)param_1;
          break;
        }
        uVar3 = uVar3 + 1 & 0xff;
        iVar2 = FUN_02178448();
      } while (uVar3 <= *(byte *)(iVar2 + 0xd));
    }
  }
  else if (param_2 == 3) {
    iVar2 = FUN_02178448();
    local_18 = SUB21(*(undefined2 *)(iVar2 + 0x1a8),0);
    iVar2 = FUN_02178448();
    local_17 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x1a8) >> 8);
  }
  FUN_0217eddc(param_2,param_1,&local_18,4);
  iVar2 = FUN_02178448();
  uVar4 = OS_GetTick();
  *(undefined8 *)(iVar2 + 0x1d8) = uVar4;
  return;
}

