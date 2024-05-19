/*
 * scheduler.h
 *
 *  Created on: May 19, 2024
 *      Author: HTH
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct
{
  void (*pTask)(void);
  uint32_t Delay;
  uint32_t Period;
  uint8_t RunMe;

  uint32_t TaskID;

} sTasks;

#define SCH_MAX_TASKS 50

void SCH_Init(void);
void SCH_AddTask(void (*pFunction)(), const uint32_t DELAY, const uint32_t PERIOD);
void SCH_Update(void);
void SCH_DispatchTasks(void);

#endif /* INC_SCHEDULER_H_ */
