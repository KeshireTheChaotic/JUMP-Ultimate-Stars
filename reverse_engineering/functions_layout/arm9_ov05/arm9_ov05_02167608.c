
void FUN_02167608(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DatabasePiece::Database_PieceCreate(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_0216ac3c(uVar1,FUN_02167654,param_1);
  return;
}

