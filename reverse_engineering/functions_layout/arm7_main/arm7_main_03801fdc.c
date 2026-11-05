
void FUN_03801fdc(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_03808fe8 + param_1 * 0x24;
  iVar4 = 0;
  do {
    iVar1 = FUN_03801770(puVar3,iVar4);
    if (iVar1 != 0) {
      FUN_03801898(iVar1,puVar3,0x7f);
      FUN_0380185c(iVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  FUN_037ff6ac();
  uVar2 = 0;
  do {
    if (param_2 <= uVar2) {
LAB_03802068:
      FUN_037ff6c0();
      if (DAT_03808aa4 != 0) {
        *(uint *)(DAT_03808aa4 + 0x40 + (uint)(byte)(&DAT_03808fe9)[param_1 * 0x24] * 0x24) =
             *(int *)(DAT_03808aa4 + 0x40 + (uint)(byte)(&DAT_03808fe9)[param_1 * 0x24] * 0x24) +
             uVar2;
      }
      return;
    }
    iVar4 = FUN_03800858(puVar3,0);
    if (iVar4 != 0) {
      FUN_038016bc(puVar3);
      goto LAB_03802068;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

