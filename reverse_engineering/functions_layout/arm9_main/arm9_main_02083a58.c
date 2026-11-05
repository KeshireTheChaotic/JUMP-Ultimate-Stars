
undefined4 FUN_02083a58(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = BattleProp::Battle_CharaPropChrInit
                    (param_2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x60),param_3,param_4,
                     param_4);
  (**(code **)(**(int **)(param_2 + 4) + 0x24))(*(int **)(param_2 + 4),uVar1);
  return uVar1;
}

