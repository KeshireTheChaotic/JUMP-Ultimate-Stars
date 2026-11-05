
/* JUS-SDK NitroStartUp [structural] crt0 call #6 of 7 in NitroSDK order */

void NitroStartUp(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  FUN_020540c4();
  FUN_02054074();
  uVar1 = FUN_02053a80();
  if ((uVar1 & 3) == 2) {
    DAT_020a0d04 = 2;
  }
  else {
    DAT_020a0d04 = 0;
  }
  uVar2 = FUN_0205431c(DAT_020a0d04);
  iVar3 = FUN_02054330(DAT_020a0d04);
  iVar4 = FUN_02054654(DAT_020a0d04,uVar2,iVar3,2);
  FUN_020540d8(DAT_020a0d04,iVar4);
  uVar5 = iVar4 + 0x1fU & 0xffffffe0;
  uVar1 = iVar3 + 0x1fU & 0xffffffe0;
  DAT_020a0c94 = FUN_020545b4(DAT_020a0d04,uVar1 - 0x1000,uVar1);
  FUN_02054710(DAT_020a0d04);
  FUN_0201a274(uVar5,(uVar1 - uVar5) + -0x1000);
  FUN_0201a2b0();
  return;
}

