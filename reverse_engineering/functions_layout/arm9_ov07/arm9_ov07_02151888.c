
void FUN_02151888(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  puVar4 = (undefined1 *)0x0;
  puVar5 = (undefined1 *)0x0;
  uStack_24 = param_4;
  uVar1 = FUN_02072070();
  iVar2 = FUN_02072050(param_1);
  iVar3 = FUN_020725ac();
  if (((iVar3 != 0) && (iVar3 = FUN_020725bc(iVar2,param_2), iVar3 != 0)) &&
     (iVar3 = func_0x021a2254(param_2), iVar3 == 0)) {
    FUN_02051890(iVar2 + 0x40,auStack_30,0xc);
    puVar4 = auStack_30;
    FUN_02051890(iVar2 + 0x14,auStack_50,0x20);
    puVar5 = auStack_50;
  }
  FUN_02051890(param_3,uVar1,0x5c);
  FUN_02051890(param_2,iVar2,0x4c);
  if (puVar4 != (undefined1 *)0x0) {
    FUN_02051890(puVar4,iVar2 + 0x40,0xc);
  }
  if (puVar5 != (undefined1 *)0x0) {
    FUN_0207260c(iVar2,puVar5,0);
  }
  FUN_0207267c(iVar2,param_4,1);
  return;
}

