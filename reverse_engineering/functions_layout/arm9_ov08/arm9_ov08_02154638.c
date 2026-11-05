
void FUN_02154638(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_021665f8(0,0);
  uVar2 = FUN_021574ac(DAT_0216e71c,param_2);
  uVar3 = FUN_02154620();
  FUN_02166408(uVar1,DAT_0216a468,DAT_0216a46a,DAT_0216a46c,DAT_0216a46e,2,uVar3,uVar2);
  iVar4 = FUN_0215702c();
  iVar5 = FUN_0215702c();
  FUN_021664d8(uVar1,*(undefined2 *)(&DAT_0216a488 + iVar4 * 4),
               *(undefined2 *)(&DAT_0216a48a + iVar5 * 4),2,0x209,param_1);
  FUN_02166370(uVar1);
  return;
}

