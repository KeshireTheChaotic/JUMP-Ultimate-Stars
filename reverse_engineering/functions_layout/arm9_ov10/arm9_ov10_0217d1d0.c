
void FUN_0217d1d0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_228 [16];
  undefined4 local_218 [129];
  
  iVar4 = 0;
  puVar3 = local_218;
  do {
    iVar1 = FUN_0217bea4(auStack_228,param_3 + 1,iVar4);
    if (iVar1 == -1) break;
    uVar2 = FUN_02005e3c(auStack_228,0,10);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x80);
  FUN_0217b348(*param_3,param_2,0,0,local_218,iVar4);
  return;
}

