
/* JUS-SCENE jus_Scene32_Exit [scene-map] scene table 0209e32c row 32 exit; slot-1 overlay 5 */

void jus_Scene32_Exit(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x02166ef8(param_2);
  switch(uVar1) {
  case 0:
    FUN_0206e590(param_1,0);
    break;
  case 1:
    FUN_0206e524(1,0x21,0x20,0xffffffff,0);
    break;
  case 2:
    uVar1 = func_0x02166f04(param_2);
    FUN_0206e524(1,0xe,0x20,0xffffffff,uVar1);
    break;
  case 3:
    FUN_0206e524(1,8,0x20,0x20,2);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

