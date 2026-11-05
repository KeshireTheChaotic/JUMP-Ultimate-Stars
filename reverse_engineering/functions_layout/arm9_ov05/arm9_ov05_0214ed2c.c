
void FUN_0214ed2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_0207879c(puVar3[2]);
  if ((uVar1 & 0x1f) == 0) {
    func_0x021bac28(*puVar3,99,0,0,0,0,0,0,param_4);
    FUN_02028384(*(undefined4 *)(puVar3[0xc] + 4),FUN_0214ee40);
  }
  else {
    if ((uVar1 & 0x10) == 0) {
      uVar2 = 0xd;
    }
    else if ((uVar1 & 0xf) == 0) {
      uVar2 = 0xe;
    }
    else {
      uVar2 = 0xf;
    }
    func_0x021bac28(*puVar3,uVar2,0,0,0,0,0,0,param_4);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214ede0);
  }
  return;
}

