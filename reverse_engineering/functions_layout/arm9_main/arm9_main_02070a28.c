
void FUN_02070a28(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char extraout_r1;
  char extraout_r1_00;
  char extraout_r1_01;
  undefined1 auStack_38 [10];
  char local_2e;
  char local_2d;
  char local_2c;
  undefined4 uStack_18;
  
                    /* JUS-TAG strings=["/000.bin","deck/","deck/Deck.aar"] */
  uStack_18 = param_4;
  piVar1 = (int *)FUN_020101f4(s_deck_Deck_aar_0209e5b8,0);
  thunk_FUN_0207400c(auStack_38,s_deck__0209e5c8);
  thunk_FUN_020741c4(auStack_38,(&PTR_DAT_0209e590)[param_2]);
  thunk_FUN_020741c4(auStack_38,s__000_bin_0209e5d0);
  FUN_0200d12c(param_3,10);
  local_2c = extraout_r1 + '0';
  uVar2 = FUN_0200d12c(param_3,10);
  FUN_0200d12c(uVar2,10);
  local_2d = extraout_r1_00 + '0';
  uVar2 = FUN_0200d12c(uVar2,10);
  FUN_0200d12c(uVar2,10);
  local_2e = extraout_r1_01 + '0';
  iVar3 = FUN_02070b30(auStack_38,0,0);
  uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x2c))(*(int **)(iVar3 + 4),0);
  FUN_02051890(uVar2,param_1,0x5c);
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  (**(code **)(*piVar1 + 0xc))();
  return;
}

