
void FUN_02031348(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_020a0d58 & 1) == 0) {
    jus_Class_02093eb4::jus_Class_02093eb4(&DAT_020a2620);
    DAT_020a2620 = &DAT_02093cd4;
    FUN_0200f2b0(&DAT_020a2620,FUN_020313e0,&DAT_020a1224);
    DAT_020a0d58 = DAT_020a0d58 | 1;
  }
  DAT_020a0d10 = &DAT_020a2620;
  iVar1 = FUN_0201a418(DAT_020a0dd8,0,0x260);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02094484::jus_Class_02094484();
  }
  DAT_020a0d84 = uVar2;
  DAT_020a0e80 = uVar2;
  return;
}

