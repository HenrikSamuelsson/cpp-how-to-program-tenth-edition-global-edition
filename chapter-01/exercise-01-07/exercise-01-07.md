# Solution Exercise 1.7

In this exercise solution terms and concepts from object oriented programming domain are explained by applying them to a watch, a well known object from the real world.

## Object

The object is in this case a watch, we can have several different watch objects; one on the wall, another on the arm, maybe part of a microwave oven, and so on.

## Attributes

Attributes are part of an object that describe the state of the object and can change. Primary attributes of a watch are the current hour, minute and second. A watch might also have a date attribute and other secondary attributes such as color, and material used for the arm strap.

## Behaviors

Behaviors describe what an object can do. A watch will need to have a tick behaviour that should be accurate enough to move the time attributes forward reasonably accurate. There will also need to be a behaviour that handles the update of the user interface as the time ticks so that the user can check the current time. When the time have drifted after a while there will need to be a behaviour to adjust the time of the watch to make it show the correct time again compared to a reference watch.

## Class

A watch can be described in conceptual way without having an actual watch available. Description would include the attributes such as hour, minutes, and second counters, and behaviors such as having a periodic tick function to move the time forward each second. This concept forms a class and when we see a real word watch we can identify this to belong to the watch class even though watches comes in many real world variants.

## Inheritance

A basic watch might sit up on the wall and only be able to show the time. This forms a base type of watches. This is use ful but it will not wake us up in the morning, for this we need an alarm functionality. A clock with alarm will still also still have the ability to show the time. We can phrase and think of this that the more special alarm clock inherits behaviour from the more basic traits that all clock share.

## Modeling Messages

Objects will frequently need to take input, we can think of this as delivering a message to the object. In the case of watch so would one message be to send the current time to the watch if the watch for some reason does not show the correct time any more.

## Encapsulation

Encapsulation means wrapping attributes into and behaviours inside objects. A watch will have a tick behaviour encapsulated inside the watch, the tick is built on some type of oscillation but the mechanism is generally hidden away inside the clock and the only the result of the ticks ticking along is reflected on the watch face that we see.

## Interface

The interface is what is reachable from the outside of an object. A clock will have an interface to see the time. This might be analog in the form hour and minute hands that point at hour and minute marks, or can be digital in form a series of numbers (HH:MM) that changes as time passes. The showing of the time is an output interface, a watch will typically also have an input interface to be able to set the time and alarms.

## Information Hiding

What is not needed for the ordinary use should be hidden away from the user. The reason being that the user might start using parts in unexpected ways if accessible and this usage can break when we want to update the inner parts. In the case of a watch we hide the mechanics of the watch behind the watch board. A user could learn to read the time by removing the watch board and instead study the cogs and wheels. But if we then update some part to more accurate and cheaper digital parts on the inside the user will not be able to read the time any more. We want to the user to access the time in the intended way only to simplify the future upgrade procedure.
