
undefined1 *
FUN_037ffea4(uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  param_1 = param_1 & ~DAT_03808a84;
  if (param_3 == 0) {
    param_1 = param_1 & ~DAT_03808a80;
  }
  puVar4 = (undefined1 *)0x0;
  iVar3 = 0;
  do {
    if ((param_1 & 1 << (uint)(byte)(&DAT_03807dd8)[iVar3]) != 0) {
      iVar1 = (uint)(byte)(&DAT_03807dd8)[iVar3] * 0x54;
      puVar2 = &DAT_03808aa8 + iVar1;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = puVar2;
      }
      else if (((byte)(&DAT_03808aca)[iVar1] <= (byte)puVar4[0x22]) &&
              (((&DAT_03808aca)[iVar1] != puVar4[0x22] ||
               (iVar1 = FUN_037ff94c(puVar4,puVar2), iVar1 < 0)))) {
        puVar4 = puVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else if (param_2 < (int)(uint)(byte)puVar4[0x22]) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    if (*(code **)(puVar4 + 0x48) != (code *)0x0) {
      (**(code **)(puVar4 + 0x48))(puVar4,0,*(undefined4 *)(puVar4 + 0x4c));
    }
    puVar4[3] = puVar4[3] & 7 | 0x10;
    puVar4[3] = puVar4[3] & 0xfe;
    FUN_037ff9f8(puVar4,param_4,param_5,param_2);
  }
  return puVar4;
}

