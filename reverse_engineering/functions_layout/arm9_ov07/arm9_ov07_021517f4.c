
undefined4 FUN_021517f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar1 = ComicDeck::ComicDeckCreate(0,1,param_3,param_4,param_4);
  uVar2 = FUN_02076908();
  uVar6 = 0;
  uVar7 = 0;
  do {
    uVar5 = FUN_02071f54();
    if (uVar5 <= uVar7) {
LAB_02151870:
      FUN_0207698c(uVar2);
      FUN_020763e0(uVar1);
      return uVar6;
    }
    uVar3 = FUN_02071f10(uVar7);
    FUN_020769cc(uVar2,uVar3);
    iVar4 = FUN_0207879c(uVar2);
    if (iVar4 == 0) {
      uVar3 = FUN_02071f10(uVar7);
      iVar4 = FUN_02078814(uVar2,uVar3);
      if (iVar4 != 0) {
        uVar6 = 1;
        goto LAB_02151870;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

