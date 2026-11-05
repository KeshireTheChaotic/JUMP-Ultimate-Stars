
void FUN_02083c44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)*(char *)(param_1 + 0x38);
  if (iVar1 < 0) {
    return;
  }
  puVar2 = *(undefined4 **)(DAT_0214be14 + iVar1 * 8 + 0x74);
  do {
    if (puVar2 == (undefined4 *)0x0) {
LAB_02083cbc:
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffeff;
      *(undefined1 *)(param_1 + 0x38) = 0xff;
      return;
    }
    if (param_1 == puVar2[2]) {
      FUN_02037c24(DAT_0214be14 + 0x74 + iVar1 * 8,puVar2,iVar1,param_4,param_4);
      FUN_020517fc(puVar2,0,0xc);
      FUN_02037b98(DAT_0214be14 + 0x84,puVar2);
      goto LAB_02083cbc;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

