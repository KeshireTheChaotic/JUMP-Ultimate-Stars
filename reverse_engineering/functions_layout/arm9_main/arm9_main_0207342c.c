
void FUN_0207342c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = DAT_0214bd44;
  uVar3 = param_2 << 0x10 | param_1 & 0xffff;
  puVar2 = DAT_0214bd40;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      if (DAT_0214bd44 != 0) {
        FUN_02037f58(&DAT_0214bd44,DAT_0214bd44);
        FUN_02037f14(&DAT_0214bd40,iVar1);
        *(uint *)(iVar1 + 8) = uVar3;
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      FUN_0205daac(&DAT_0214bcbc,param_1,param_2);
      FUN_0205b910(&DAT_0214bcbc,DAT_0214bd4d);
      FUN_0205b8c4(&DAT_0214bcbc,DAT_0214bd4d,0);
      return;
    }
    if (puVar2[2] == uVar3) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return;
}

